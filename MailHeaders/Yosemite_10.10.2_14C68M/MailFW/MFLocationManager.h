/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MCInvocationQueue, MFNetworkLocation, NSMutableArray;

@interface MFLocationManager : NSObject
{
    NSMutableArray *_locations;
    BOOL _supressNotifications;
    MFNetworkLocation *_current;
    MCInvocationQueue *_invocationQueue;
}

+ (id)currentLocation;
+ (id)sharedManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) MCInvocationQueue *invocationQueue; // @synthesize invocationQueue=_invocationQueue;
@property(retain) MFNetworkLocation *current; // @synthesize current=_current;
- (void).cxx_destruct;
- (id)_archivedLocations;
- (void)_unarchiveLocations:(id)arg1;
- (void)_managedLocationChanged:(id)arg1;
- (void)_determineCurrentLocation;
- (void)_networkChanged:(id)arg1;
- (id)locationForIPAddress:(id)arg1;
- (id)locationForDomain:(id)arg1;
- (void)addLocation:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithUserDefaultsArray:(id)arg1;

@end
