//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMDispatchTimer, NSString;

__attribute__((visibility("hidden")))
@interface FMNanoIDSRequest : NSObject
{
    NSString *_idsMessageID;
    CDUnknownBlockType _responseHandler;
    FMDispatchTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FMDispatchTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSString *idsMessageID; // @synthesize idsMessageID=_idsMessageID;

@end
