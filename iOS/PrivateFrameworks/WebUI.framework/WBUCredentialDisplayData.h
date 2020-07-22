//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WBSCredentialMatch;

@interface WBUCredentialDisplayData : NSObject
{
    WBSCredentialMatch *_match;
    NSString *_detail;
    NSDate *_creationDate;
}

+ (id)descriptionForPasswordWithUser:(id)arg1 creationDate:(id)arg2;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) WBSCredentialMatch *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3;

@end

