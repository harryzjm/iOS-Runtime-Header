//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSMutableCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSUUID;

@interface MPMusicPlayerControllerQueue : NSObject <NSSecureCoding, NSMutableCopying>
{
    NSMutableArray *_items;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *mutableItems;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaItems:(id)arg1 uuid:(id)arg2;

@end
