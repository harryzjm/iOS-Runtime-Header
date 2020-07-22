//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNVCardOptions;
@protocol CNVCardPerson;

@interface CNVCard30PHOTOHelper : NSObject
{
    id <CNVCardPerson> _person;
    CNVCardOptions *_options;
    unsigned long long _maxBytes;
}

@property(readonly, nonatomic) unsigned long long maxBytes; // @synthesize maxBytes=_maxBytes;
@property(readonly, nonatomic) CNVCardOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <CNVCardPerson> person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)compressImage:(id)arg1 allowableCompressions:(id)arg2;
- (id)scaleImage:(id)arg1 toFit:(struct CGSize)arg2 allowableCompressionQuality:(id)arg3;
- (id)scaleImage:(id)arg1 toFitSizes:(id)arg2 allowableCompressionQuality:(id)arg3;
- (id)image;
- (id)largeImage;
- (id)bestEffortImage;
- (id)description;
- (id)initWithPerson:(id)arg1 options:(id)arg2 maximumDataLength:(unsigned long long)arg3;
- (id)init;

@end
