/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORequestCounterLocalProxy : NSObject <GEORequestCounterProtocol> {
    GEORequestCounterPersistence * _persistence;
}

@property (nonatomic) bool countersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearCounters;
- (bool)countersEnabled;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (void)readRequestLogsSince:(id)arg1 handler:(id /* block */)arg2;
- (void)readRequestsPerAppSince:(id)arg1 handler:(id /* block */)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2;
- (void)setCountersEnabled:(bool)arg1;
- (void)startPowerLogSessionWithName:(id)arg1;

@end