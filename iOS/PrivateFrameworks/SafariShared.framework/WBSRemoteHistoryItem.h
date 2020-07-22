//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSString *_title;
    NSDate *_lastVisitTime;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *lastVisitTime; // @synthesize lastVisitTime=_lastVisitTime;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3;
- (id)init;

@end
