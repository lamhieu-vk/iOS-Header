//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMDataSetting.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString;

@interface HMDataSetting (HFDebugging) <HFStateDumpBuildable>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_debugValueForData:(unsigned long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

