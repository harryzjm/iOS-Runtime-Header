//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol GDCoordinationXPCProtocol
- (void)sourceUpdatedWithSourceType:(NSString *)arg1 sourceIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)graphUpdatedWithSource:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

