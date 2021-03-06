//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "SWCRedactedDescription-Protocol.h"

@interface SWCSubstitutionVariableList : NSObject <SWCRedactedDescription, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)substitutionVariableListWithDictionary:(id)arg1;
+ (id)builtInSubstitutionVariableList;
+ (id)valuesWithCharacterTypeFunction:(CDUnknownFunctionPointerType)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)redactedDescription;
- (id)debugDescription;
- (id)description;
- (id)_descriptionDebug:(_Bool)arg1 redacted:(_Bool)arg2;
- (void)enumerateSubstitutionVariablesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long count;
- (void)enumerateSubstitutionVariableStructuresWithBlock:(CDUnknownBlockType)arg1;
- (const struct SWCSubstitutionVariable *)firstVariable;

@end

