//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSException.h>

@class NSString;

@interface NSException (IBBinaryArchivingAdditions)
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)ib_exceptionByModifyingUserInfo:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

