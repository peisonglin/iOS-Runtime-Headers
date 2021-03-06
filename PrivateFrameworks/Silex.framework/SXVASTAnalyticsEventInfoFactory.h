/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVASTAnalyticsEventInfoFactory : NSObject <SXVASTAnalyticsEventInfoFactory> {
    <SXVisibilityMonitoring> * _visibilityMonitor;
    <SXVolumeProviding> * _volumeProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXVisibilityMonitoring> *visibilityMonitor;
@property (nonatomic, readonly) <SXVolumeProviding> *volumeProvider;

- (void).cxx_destruct;
- (id)createAnalyticsEventInfo;
- (id)createAnalyticsEventInfoWithMetadata:(id)arg1;
- (id)createAnalyticsProgressEventInfoForQuartile:(unsigned long long)arg1 withMetadata:(id)arg2;
- (id)initWithVisibilityMonitor:(id)arg1 volumeProvider:(id)arg2;
- (id)visibilityMonitor;
- (id)volumeProvider;

@end
