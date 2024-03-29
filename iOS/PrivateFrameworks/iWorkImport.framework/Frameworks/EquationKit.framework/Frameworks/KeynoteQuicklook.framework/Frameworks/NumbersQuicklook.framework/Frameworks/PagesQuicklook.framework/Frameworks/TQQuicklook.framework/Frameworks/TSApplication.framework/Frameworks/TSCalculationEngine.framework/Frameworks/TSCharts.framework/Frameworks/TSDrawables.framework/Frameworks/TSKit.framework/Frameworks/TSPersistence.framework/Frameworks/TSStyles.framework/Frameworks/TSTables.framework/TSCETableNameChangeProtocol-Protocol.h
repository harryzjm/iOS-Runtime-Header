//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol TSCETableNameChangeProtocol
- (void)didChangeTableName:(NSString *)arg1 fromTableName:(NSString *)arg2 forTableUID:(struct TSKUIDStruct)arg3;
- (void)didRemoveTableName:(NSString *)arg1 forTableUID:(struct TSKUIDStruct)arg2;
- (void)didAddTableName:(NSString *)arg1 forTableUID:(struct TSKUIDStruct)arg2;
@end

