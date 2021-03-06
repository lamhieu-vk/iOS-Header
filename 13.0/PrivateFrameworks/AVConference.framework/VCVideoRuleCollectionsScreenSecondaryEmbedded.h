//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCVideoRuleCollectionsScreenSecondary.h>

@protocol VCHardwareSettingsEmbeddedProtocol;

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsScreenSecondaryEmbedded : VCVideoRuleCollectionsScreenSecondary
{
    id <VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;
}

+ (id)sharedInstance;
- (unsigned int)tilesPerFrame:(int)arg1;
- (_Bool)setupH264Rules;
- (_Bool)setupRules;
- (void)selectPreferredRule:(id)arg1 screenSize:(struct CGSize)arg2;
- (void)initSupportedPayloads;
- (id)initWithHardwareSettings:(id)arg1;

@end

