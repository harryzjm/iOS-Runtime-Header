//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTapToRadarDiagnosticContainer-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PXTapToRadarConcreteDiagnosticContainer : NSObject <PXTapToRadarDiagnosticContainer>
{
    NSString *_name;
    NSMutableDictionary *_dictionary;
    NSMutableArray *_attachments;
    NSMutableArray *_subproviders;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *subproviders; // @synthesize subproviders=_subproviders;
@property(readonly, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)addSubproviders:(id)arg1;
- (void)addSubprovider:(id)arg1;
- (void)addAttachmentWithData:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithSwiftCode:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithObjectiveCCode:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithText:(id)arg1 name:(id)arg2 extension:(id)arg3;
- (void)addAttachmentWithText:(id)arg1 name:(id)arg2;
- (void)addAttachmentWithDictionary:(id)arg1 name:(id)arg2;
- (void)addAttachment:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;

@end
