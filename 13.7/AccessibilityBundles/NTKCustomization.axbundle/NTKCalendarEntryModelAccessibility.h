//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__NTKCalendarEntryModelAccessibility_super.h"

@interface NTKCalendarEntryModelAccessibility : __NTKCalendarEntryModelAccessibility_super
{
}

+ (_Bool)_accessibilityHasConflictWithModel:(id)arg1;
+ (_Bool)_accessibilityHasEventsWithModel:(id)arg1;
+ (void)_accessibilitySetLabelWithKey:(id)arg1 onOnShortTemplatesInEntryWithUnknownDate:(id)arg2 forFamily:(long long)arg3;
+ (void)_accessibilityUpdateLabelOnProviderIndicatingNoEventsRemaining:(id)arg1 providerIndicatingConflict:(id)arg2 providerIndicatingNextEvent:(id)arg3 model:(id)arg4;
+ (id)loadingEntryForFamily:(long long)arg1;
+ (id)lockedEntryForFamily:(long long)arg1;
+ (id)extraLarge:(id)arg1;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)smallUtility:(id)arg1;
+ (id)smallModular:(id)arg1;
+ (id)circular:(id)arg1 isMedium:(_Bool)arg2;
+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

@end

