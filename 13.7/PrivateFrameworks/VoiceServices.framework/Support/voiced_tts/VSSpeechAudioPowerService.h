//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <voiced_tts/AFAudioPowerProviding-Protocol.h>

@class NSString;
@protocol AFAudioPowerProviding;

@interface VSSpeechAudioPowerService : NSObject <AFAudioPowerProviding>
{
    id <AFAudioPowerProviding> _previousProvider;
}

+ (id)sharedServices;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AFAudioPowerProviding> previousProvider; // @synthesize previousProvider=_previousProvider;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)didEndAccessPower;
- (void)willBeginAccessPower;
- (id)getCurrentAudioPowerProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

