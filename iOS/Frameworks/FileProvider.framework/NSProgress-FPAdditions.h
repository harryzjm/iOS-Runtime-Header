//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@interface NSProgress (FPAdditions)
- (_Bool)fp_isGlobalProgressForDomainAt:(id)arg1;
- (void)fp_addChildProgress:(id)arg1 withUnitCount:(id)arg2;
- (_Bool)fp_isOfFileOperationKind:(id)arg1 strict:(_Bool)arg2;
- (_Bool)fp_isOfFileOperationKind:(id)arg1;
- (void)fp_setFileOperationKind:(id)arg1;
- (id)fp_fileOperationKind;
- (id)fp_fileOperationKindStrict:(_Bool)arg1;
@end

