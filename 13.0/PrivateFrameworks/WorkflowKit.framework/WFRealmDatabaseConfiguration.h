//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RLMRealmConfiguration;

@interface WFRealmDatabaseConfiguration : NSObject
{
    RLMRealmConfiguration *_realmConfiguration;
}

+ (id)inMemoryConfigurationWithIdentifier:(id)arg1;
+ (id)inMemoryConfiguration;
+ (id)systemShortcutsConfiguration;
@property(readonly, nonatomic) RLMRealmConfiguration *realmConfiguration; // @synthesize realmConfiguration=_realmConfiguration;
- (void).cxx_destruct;

@end

