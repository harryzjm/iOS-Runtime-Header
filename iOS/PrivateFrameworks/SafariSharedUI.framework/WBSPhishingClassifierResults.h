//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, UIImage;

@interface WBSPhishingClassifierResults : NSObject
{
    float _confidence;
    NSURL *_url;
    UIImage *_image;
    unsigned long long _classification;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long classification; // @synthesize classification=_classification;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithURL:(id)arg1 image:(id)arg2 classification:(unsigned long long)arg3 identifier:(id)arg4 confidence:(float)arg5;

@end
