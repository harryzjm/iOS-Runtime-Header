//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface NTKFaceCollectionUpdate : NSObject
{
    long long _type;
    NSUUID *_uuid;
    CDUnknownBlockType _block;
}

+ (id)updateWithType:(long long)arg1 uuid:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end
