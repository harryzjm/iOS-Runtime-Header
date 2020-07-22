//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRKClassroomConfiguration : NSObject
{
}

+ (id)placeholderFileURL;
+ (_Bool)placeholderFileExists;
+ (_Bool)removePlaceholderFileWithError:(id *)arg1;
+ (_Bool)createPlaceholderFileWithError:(id *)arg1;
+ (_Bool)isStudentdInstalled;
+ (id)studentDaemonConnection;
+ (id)setOfActiveRestrictionUUIDs:(id)arg1;
+ (void)fetchConfiguration:(CDUnknownBlockType)arg1;
+ (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchAdHocConfiguration:(CDUnknownBlockType)arg1;
+ (void)setAdHocConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (unsigned long long)configurationType;

@end

