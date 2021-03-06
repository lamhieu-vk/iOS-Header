//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSpeechEngine, VSVoiceResourceAsset;
@protocol OS_dispatch_queue;

@interface VSPrewarmService : NSObject
{
    VSSpeechEngine *_cachedEngine;
    VSVoiceResourceAsset *_loadedResources;
    NSObject<OS_dispatch_queue> *_prewarmQueue;
}

+ (id)sharedService;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue; // @synthesize prewarmQueue=_prewarmQueue;
@property(retain, nonatomic) VSVoiceResourceAsset *loadedResources; // @synthesize loadedResources=_loadedResources;
@property(retain, nonatomic) VSSpeechEngine *cachedEngine; // @synthesize cachedEngine=_cachedEngine;
- (void)waitUntilPrewarmFinish;
- (void)_loadVoiceResources:(id)arg1 forEngine:(id)arg2;
- (id)loadEngineForVoice:(id)arg1 resources:(id)arg2;
- (id)engineForVoice:(id)arg1 resources:(id)arg2;
- (id)_engineForVoice:(id)arg1 resources:(id)arg2;
- (id)cachedEngineForVoice:(id)arg1 resources:(id)arg2;
- (id)_cachedEngineForVoice:(id)arg1 resources:(id)arg2;
- (void)prewarmWithRequest:(id)arg1;
- (id)init;

@end

