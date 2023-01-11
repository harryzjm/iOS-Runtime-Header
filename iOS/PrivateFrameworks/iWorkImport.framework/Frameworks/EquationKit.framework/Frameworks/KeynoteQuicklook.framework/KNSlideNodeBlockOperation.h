//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBlockOperation.h>

@class KNSlideNode;

@interface KNSlideNodeBlockOperation : NSBlockOperation
{
    KNSlideNode *_slideNode;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=_slideNode;
- (id)initWithSlideNode:(id)arg1 type:(long long)arg2;

@end
