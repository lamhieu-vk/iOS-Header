//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKIdentifierLookupTable : NSObject
{
    NSMapTable *_identifierMapTable;
    struct os_unfair_lock_s _lookupTableSpinLock;
}

- (void).cxx_destruct;
- (void)_insertCode:(long long)arg1 forIdentifier:(id)arg2;
- (void)enumerateCodesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)codeForIdentifier:(id)arg1 code:(long long *)arg2;
- (void)setCode:(long long)arg1 forIdentifier:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

