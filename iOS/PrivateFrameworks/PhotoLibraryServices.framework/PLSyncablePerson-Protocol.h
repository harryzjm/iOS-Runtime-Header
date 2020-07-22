//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSString;

@protocol PLSyncablePerson <NSObject, PLSyncableObject>
@property(readonly, nonatomic) _Bool keyFaceIsPicked;
@property(readonly, nonatomic) _Bool isTombstone;
@property(readonly, nonatomic) _Bool graphVerified;
@property(readonly, nonatomic) _Bool userVerified;
@property(retain, nonatomic) NSString *fullName;
@property(retain, nonatomic) NSString *personUUID;
- (NSString *)syncDescription;
- (NSString *)pointerDescription;
- (void)setKeyFaceToPicked;
@end

