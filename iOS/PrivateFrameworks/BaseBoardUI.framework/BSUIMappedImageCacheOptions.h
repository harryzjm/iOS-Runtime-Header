//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <BaseBoardUI/NSCopying-Protocol.h>

@protocol BSPathProviding;

@interface BSUIMappedImageCacheOptions : NSObject <NSCopying>
{
    id <BSPathProviding> _containerPathProvider;
}

+ (id)optionsWithContainerPathProvider:(id)arg1;
@property(retain, nonatomic) id <BSPathProviding> containerPathProvider; // @synthesize containerPathProvider=_containerPathProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

