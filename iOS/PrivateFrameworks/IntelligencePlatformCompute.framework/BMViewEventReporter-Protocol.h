//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol BMViewEventReporter
- (_Bool)streamDeletionWithStreamIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)streamPrunedWithStreamIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)streamUpdatedWithStreamIdentifier:(NSString *)arg1 error:(id *)arg2;
@end

