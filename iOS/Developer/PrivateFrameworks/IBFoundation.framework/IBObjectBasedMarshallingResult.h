//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;
@protocol IBObjectRepresentationTranslator;

@interface IBObjectBasedMarshallingResult : NSObject <IBBinaryArchiving>
{
    NSString *_identifier;
    NSObject<IBObjectRepresentationTranslator> *_archivingTranslationContext;
}

@property(readonly, nonatomic) NSObject<IBObjectRepresentationTranslator> *archivingTranslationContext; // @synthesize archivingTranslationContext=_archivingTranslationContext;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)didFinishEncodingWithBinaryArchiver:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (void)didFinishDecodingWithBinaryUnarchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)_originalInitiatingRequestFromContextOfUnarchiver:(id)arg1;
- (id)initWithIdentifier:(id)arg1 archivingTranslationContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
