//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHASEOccluder, PHASESource;

__attribute__((visibility("hidden")))
@interface REPHASEEntity : NSObject
{
    PHASESource *_source;
    PHASEOccluder *_occluder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PHASEOccluder *occluder; // @synthesize occluder=_occluder;
@property(retain, nonatomic) PHASESource *source; // @synthesize source=_source;

@end

