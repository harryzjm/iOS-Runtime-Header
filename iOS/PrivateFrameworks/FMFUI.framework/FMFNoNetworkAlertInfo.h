//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FMFNoNetworkAlertInfo : NSObject
{
    NSString *_title;
    NSString *_message;
    NSURL *_actionURL;
}

@property(retain, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

