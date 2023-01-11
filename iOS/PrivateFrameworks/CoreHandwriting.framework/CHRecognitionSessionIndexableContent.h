//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject
{
    NSString *_indexableTextRepresentation;
    NSString *_presentableTextRepresentation;
}

@property(readonly, copy, nonatomic) NSString *presentableTextRepresentation; // @synthesize presentableTextRepresentation=_presentableTextRepresentation;
@property(readonly, copy, nonatomic) NSString *indexableTextRepresentation; // @synthesize indexableTextRepresentation=_indexableTextRepresentation;
- (void)dealloc;
- (id)initWithIndexableTextRepresentation:(id)arg1 presentableTextRepresentation:(id)arg2;

@end
