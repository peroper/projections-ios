//
//  PROJProjection.h
//  proj-ios
//
//  Created by Brian Osborn on 5/21/15.
//  Copyright (c) 2015 NGA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "proj_api.h"
#import "PROJUnits.h"

/**
 *  Single Projection for an authority and code
 */
@interface PROJProjection : NSObject

/**
 *  Initialize
 *
 *  @param authority coordinate authority
 *  @param code      coordinate code
 *  @param crs       coordinate reference system
 *  @param toMeters  to meters conversion
 *
 *  @return new projection
 */
-(instancetype) initWithAuthority: (NSString *) authority
                    andNumberCode: (NSNumber *) code
                           andCrs: (projPJ) crs
                      andToMeters: (NSDecimalNumber *) toMeters;

/**
 *  Initialize
 *
 *  @param authority coordinate authority
 *  @param code      coordinate code
 *  @param crs       coordinate reference system
 *  @param toMeters  to meters conversion
 *
 *  @return new projection
 */
-(instancetype) initWithAuthority: (NSString *) authority
                          andCode: (NSString *) code
                           andCrs: (projPJ) crs
                      andToMeters: (NSDecimalNumber *) toMeters;

/**
 *  Initialize
 *
 *  @param authority coordinate authority
 *  @param code      coordinate code
 *  @param crs       coordinate reference system
 *  @param toMeters  to meters conversion
 *  @param definition  well-known text coordinate definition
 *
 *  @return new projection
 */
-(instancetype) initWithAuthority: (NSString *) authority
                    andNumberCode: (NSNumber *) code
                           andCrs: (projPJ) crs
                      andToMeters: (NSDecimalNumber *) toMeters
                    andDefinition: (NSString *) definition;

/**
 *  Initialize
 *
 *  @param authority coordinate authority
 *  @param code      coordinate code
 *  @param crs       coordinate reference system
 *  @param toMeters  to meters conversion
 *  @param definition  well-known text coordinate definition
 *
 *  @return new projection
 */
-(instancetype) initWithAuthority: (NSString *) authority
                          andCode: (NSString *) code
                           andCrs: (projPJ) crs
                      andToMeters: (NSDecimalNumber *) toMeters
                    andDefinition: (NSString *) definition;

// CRSObject initializers

/**
 * Get the coordinate authority
 *
 * @return authority
 */
-(NSString *) authority;

/**
 * Get the coordinate code
 *
 * @return code
 */
-(NSString *) code;

/**
 * Get the Coordinate Reference System
 *
 * @return coordinate reference system
 */
-(projPJ) crs;

/**
 * Get the to meters conversion value
 *
 * @return to meters
 */
-(NSDecimalNumber *) toMeters;

/**
 * Check if a lat lon crs
 *
 * @return true if a lat lon crs
 */
-(BOOL) isLatLong;

/**
 * Get the well-known text coordinate definition
 *
 * @return definition
 */
-(NSString *) definition;

/**
 * Get the definition parsed Coordinate Reference System
 *
 * @return coordinate reference system
 */
// TODO
//-(CRSObject *) definitionCRS;

/**
 *  Convert the value to meters
 *
 *  @param value value
 *
 *  @return meters
 */
-(double) toMeters: (double) value;

/**
 *  Get the projection unit
 *
 *  @return unit
 */
-(enum PROJUnit) getUnit;

/**
 * Determine if the projection is in the provided unit
 *
 * @param unit
 *            unit
 * @return true if in the provided unit
 */
-(BOOL) isUnit: (enum PROJUnit) unit;

/**
 * Check if this projection is equal to the authority and code
 *
 * @param authority
 *            coordinate authority
 * @param code
 *            coordinate code
 * @return true if equal
 */
-(BOOL) isEqualToAuthority: (NSString *) authority andNumberCode: (NSNumber *) code;

/**
 * Check if this projection is equal to the authority and code
 *
 * @param authority
 *            coordinate authority
 * @param code
 *            coordinate code
 * @return true if equal
 */
-(BOOL) isEqualToAuthority: (NSString *) authority andCode: (NSString *) code;

/**
 * Check if this projection is equal to the projection
 *
 * @param projection
 *            projection
 * @return true if equal
 */
-(BOOL) isEqualToProjection: (PROJProjection *) projection;

@end
