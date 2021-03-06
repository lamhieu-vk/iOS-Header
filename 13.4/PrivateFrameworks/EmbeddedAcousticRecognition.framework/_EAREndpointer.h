//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EAREndpointer : NSObject
{
    struct unique_ptr<quasar::HybridEndpointer, std::__1::default_delete<quasar::HybridEndpointer>> _endpointer;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)acceptEagerResultWithFeatures:(id)arg1 featuresToLog:(id *)arg2;
- (id)defaultServerEndpointFeatures;
- (_Bool)didEndpointWithFeatures:(id)arg1 audioTimestamp:(double)arg2 featuresToLog:(id *)arg3 endpointPosterior:(float *)arg4 extraDelayMs:(int *)arg5;
- (void)updateEndpointerDelayedTriggerSwitch:(_Bool)arg1;
- (void)updateEndpointerThresholdWithValue:(float)arg1;
- (_Bool)requestSupportedWithSamplingRate:(unsigned long long)arg1;
- (id)initWithConfiguration:(id)arg1 delaysTrigger:(_Bool)arg2 modelVersion:(id *)arg3;
- (id)initWithConfiguration:(id)arg1 modelVersion:(id *)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

