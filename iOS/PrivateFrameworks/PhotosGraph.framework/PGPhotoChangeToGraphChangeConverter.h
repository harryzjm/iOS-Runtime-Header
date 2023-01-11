//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject
{
    NSMutableDictionary *_entityTranslatorByEntityName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *entityTranslatorByEntityName; // @synthesize entityTranslatorByEntityName=_entityTranslatorByEntityName;
- (id)graphChangesWithPhotoChange:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_registerTranslatorsWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end
