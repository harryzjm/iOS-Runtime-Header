//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface DOCItemCollectionSubscriber : NSObject
{
    NSUUID *_UUID;
    CDUnknownBlockType _updateBlock;
}

@property(copy) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;

@end
