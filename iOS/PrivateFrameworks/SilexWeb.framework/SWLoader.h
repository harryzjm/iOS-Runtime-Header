//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SWLoader : NSObject
{
    CDUnknownBlockType _loadBlock;
}

+ (id)loaderWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType loadBlock; // @synthesize loadBlock=_loadBlock;
- (void)load;

@end
