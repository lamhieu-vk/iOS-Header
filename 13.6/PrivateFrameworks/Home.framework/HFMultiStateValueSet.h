//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>
#import <Home/NSFastEnumeration-Protocol.h>

@class HMCharacteristicMetadata, NSArray, NSMutableDictionary, NSSet;

@interface HFMultiStateValueSet : NSObject <NSCopying, NSFastEnumeration>
{
    HMCharacteristicMetadata *_characteristicMetadata;
    CDUnknownBlockType _valueComparator;
    NSMutableDictionary *_displayResultsByValue;
}

+ (id)binaryValueSetWithCharacteristicMetadata:(id)arg1 firstValue:(id)arg2 firstTitle:(id)arg3 secondValue:(id)arg4 secondTitle:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *displayResultsByValue; // @synthesize displayResultsByValue=_displayResultsByValue;
@property(copy, nonatomic) CDUnknownBlockType valueComparator; // @synthesize valueComparator=_valueComparator;
@property(readonly, nonatomic) HMCharacteristicMetadata *characteristicMetadata; // @synthesize characteristicMetadata=_characteristicMetadata;
- (id)description;
- (unsigned long long)hash;
- (void)minusSet:(id)arg1;
- (void)unionSet:(id)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;
- (void)removeValuesFromArray:(id)arg1;
- (void)addValuesFromArray:(id)arg1 displayResultsGenerator:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)removeValue:(id)arg1;
- (_Bool)addValue:(id)arg1 displayResults:(id)arg2 addOnlyIfValid:(_Bool)arg3;
- (_Bool)addValue:(id)arg1 displayResults:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)displayResultsForValue:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly, nonatomic) NSArray *sortedValues;
@property(readonly, nonatomic) NSSet *allValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharacteristicMetadata:(id)arg1;
- (id)init;

@end

