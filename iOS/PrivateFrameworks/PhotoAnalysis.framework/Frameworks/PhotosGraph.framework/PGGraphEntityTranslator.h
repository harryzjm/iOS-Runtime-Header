//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary;

@interface PGGraphEntityTranslator : NSObject
{
    PHPhotoLibrary *_photoLibrary;
}

+ (id)uuidsFromLocalIdentifiers:(id)arg1;
+ (id)uuidFromLocalIdentifier:(id)arg1;
+ (id)entityClassName;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void).cxx_destruct;
- (id)graphChangesForChangedPropertyNamesByLocalIdentifier:(id)arg1 change:(id)arg2;
- (id)graphChangesForDeletedIdentifiers:(id)arg1;
- (id)graphChangesForInsertedIdentifiers:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end

