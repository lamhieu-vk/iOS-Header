//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary, PLAppPrivateData;

@interface PHPhotoLibraryAppPrivateData : NSObject
{
    PLAppPrivateData *_impl;
    PHPhotoLibrary *_photoLibrary;
}

+ (_Bool)accessInstanceVariablesDirectly;
- (void).cxx_destruct;
@property __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain) PLAppPrivateData *impl; // @synthesize impl=_impl;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)_handleWriteException:(id)arg1;
- (void)invalidate;
- (id)debugDescription;
- (id)initWithLibrary:(id)arg1;

@end

