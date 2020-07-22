//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/NSCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface MRContentItemRequest : NSObject <NSCoding>
{
    void *_item;
    void *_request;
}

@property(nonatomic) void *request; // @synthesize request=_request;
@property(nonatomic) void *item; // @synthesize item=_item;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithItem:(void *)arg1 request:(void *)arg2;

@end

