//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCNullPlaybackContext : MPPlaybackContext
{
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
+ (Class)queueFeederClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

