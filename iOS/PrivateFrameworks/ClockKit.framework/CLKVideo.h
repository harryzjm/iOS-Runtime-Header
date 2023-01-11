//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClockKit/NSCopying-Protocol.h>

@class CLKDevice, NSString, NSURL;

@interface CLKVideo : NSObject <NSCopying>
{
    CLKDevice *_device;
    NSString *_name;
    NSURL *_url;
}

+ (id)videoNamed:(id)arg1 forDevice:(id)arg2;
+ (id)videoWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3;
+ (id)videoNamed:(id)arg1 forDevice:(id)arg2 inBundle:(id)arg3;
+ (id)_videoNamed:(id)arg1 device:(id)arg2 bundle:(id)arg3 modifier:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSURL *url; // @dynamic url;
- (id)initWithName:(id)arg1 forDevice:(id)arg2 url:(id)arg3;

@end
