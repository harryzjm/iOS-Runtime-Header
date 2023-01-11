//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, PGTitle;

@interface PGTitleTuple : NSObject
{
    PGTitle *_title;
    PGTitle *_subtitle;
    NSArray *_locationNames;
}

@property(readonly, nonatomic) NSArray *locationNames; // @synthesize locationNames=_locationNames;
@property(readonly, nonatomic) PGTitle *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) PGTitle *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3;

@end
