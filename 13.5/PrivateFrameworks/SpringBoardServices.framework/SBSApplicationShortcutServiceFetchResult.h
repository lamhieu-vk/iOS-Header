//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying>
{
    NSArray *_staticApplicationShortcutItems;
    NSArray *_dynamicApplicationShortcutItems;
    NSArray *_composedApplicationShortcutItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *composedApplicationShortcutItems; // @synthesize composedApplicationShortcutItems=_composedApplicationShortcutItems;
@property(readonly, nonatomic) NSArray *dynamicApplicationShortcutItems; // @synthesize dynamicApplicationShortcutItems=_dynamicApplicationShortcutItems;
@property(readonly, nonatomic) NSArray *staticApplicationShortcutItems; // @synthesize staticApplicationShortcutItems=_staticApplicationShortcutItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2 composedApplicationShortcutItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

