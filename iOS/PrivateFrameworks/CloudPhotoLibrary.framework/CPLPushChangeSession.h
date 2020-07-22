//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLPushChangeSession <CPLAbstractObject>
{
}

+ (id)shortDescription;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(CDUnknownBlockType)arg2;
- (void)commitChangeBatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithLibraryManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

