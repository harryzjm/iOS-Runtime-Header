//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface MKPublisherIcon : NSObject
{
    UIImage *_publisherImage;
    NSString *_publisherName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, nonatomic) UIImage *publisherImage; // @synthesize publisherImage=_publisherImage;
- (id)initUsingName:(id)arg1 andImage:(id)arg2;

@end
