//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UISSlotEmptyContent : NSObject
{
    struct CGSize _contentSize;
}

+ (id)contentWithSize:(struct CGSize)arg1;
- (id)image;
- (void)deleteFromLayerContext:(id)arg1;
- (_Bool)shouldReplaceExistingContent;
- (_Bool)isRemote;
- (struct CGSize)contentSize;
- (unsigned char)contentScale;
- (id)initWithSize:(struct CGSize)arg1;

@end

