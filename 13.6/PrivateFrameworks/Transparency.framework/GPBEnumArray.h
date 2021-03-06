//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>

@class GPBMessage;

__attribute__((visibility("hidden")))
@interface GPBEnumArray : NSObject <NSCopying>
{
    GPBMessage *_autocreator;
    CDUnknownFunctionPointerType _validationFunc;
    int *_values;
    unsigned long long _count;
    unsigned long long _capacity;
}

+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
+ (id)arrayWithValueArray:(id)arg1;
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValue:(int)arg2;
+ (id)arrayWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
+ (id)array;
@property(readonly, nonatomic) CDUnknownFunctionPointerType validationFunc; // @synthesize validationFunc=_validationFunc;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2;
- (void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)addValues:(const int *)arg1 count:(unsigned long long)arg2;
- (void)addValue:(int)arg1;
- (void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2;
- (void)removeAll;
- (void)removeValueAtIndex:(unsigned long long)arg1;
- (void)addRawValuesFromArray:(id)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withRawValue:(int)arg2;
- (void)insertRawValue:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)addRawValues:(const int *)arg1 count:(unsigned long long)arg2;
- (void)addRawValue:(int)arg1;
- (void)internalResizeToCapacity:(unsigned long long)arg1;
- (void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (int)rawValueAtIndex:(unsigned long long)arg1;
- (int)valueAtIndex:(unsigned long long)arg1;
- (void)enumerateRawValuesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRawValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 capacity:(unsigned long long)arg2;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1 rawValues:(const int *)arg2 count:(unsigned long long)arg3;
- (id)initWithValidationFunction:(CDUnknownFunctionPointerType)arg1;
- (id)initWithValueArray:(id)arg1;
- (id)init;

@end

