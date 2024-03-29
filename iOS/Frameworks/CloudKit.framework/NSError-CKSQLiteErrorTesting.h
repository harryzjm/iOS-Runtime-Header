//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CKSQLiteErrorTesting)
+ (id)CKErrorFromErrno;
+ (id)CKErrorWithPOSIXCode:(int)arg1;
- (_Bool)CK_isCKSQLiteError;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (_Bool)CKIsPOSIXErrorCode:(long long)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isComparisonError) _Bool comparisonError;
- (id)CKErrorScopedToZoneIDs:(id)arg1;
- (_Bool)CKHasTopLevelUnderlyingError;
- (_Bool)CKHasCKErrorInUnderlyingErrors;
- (_Bool)CKIsCKError;
- (_Bool)CKIsObjectNotFoundError;
- (_Bool)CKIsNotFoundError;
- (id)CKClientSuitableErrorSpecificUserInfo;
- (id)CKClientSuitableUnderlyingError;
- (id)CKClientSuitableError;
@end

