//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMTranscriptEffectHelper : NSObject
{
}

+ (_Bool)shouldShowReplayButtonForEffectIdentifier:(id)arg1;
+ (_Bool)isFeatureEnabled;
+ (id)sendWithStringForEffectIdentifier:(id)arg1;
+ (id)replayStringForEffectIdentifier:(id)arg1;
+ (id)nameForEffectIdentifier:(id)arg1;
+ (id)findIdentifierByMathcingPartialSufix:(id)arg1;
+ (id)sendWithEffectStringMap;
+ (id)replayStringMap;
+ (id)identifierNameMap;
+ (_Bool)effectIdentifierIsImpactEffect:(id)arg1;
+ (_Bool)effectIdentifierIsFullScreenMoment:(id)arg1;
+ (_Bool)identifierIsEffectIdentifier:(id)arg1;
+ (id)allEffectIdentifiers;
+ (void)setFeatureEnabled:(_Bool)arg1;

@end

