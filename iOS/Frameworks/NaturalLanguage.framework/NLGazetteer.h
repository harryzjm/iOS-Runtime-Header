//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface NLGazetteer : NSObject
{
    void *_gazetteer;
    NSString *_language;
}

+ (_Bool)writeGazetteerMLModelForDictionary:(id)arg1 language:(id)arg2 toURL:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (_Bool)writeGazetteerForDictionary:(id)arg1 language:(id)arg2 toURL:(id)arg3 error:(id *)arg4;
+ (id)gazetteerWithMLModel:(id)arg1 error:(id *)arg2;
+ (id)gazetteerWithData:(id)arg1 error:(id *)arg2;
+ (id)gazetteerWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy) NSString *language; // @synthesize language=_language;
- (void)_addImplementationToArray:(struct __CFArray *)arg1;
- (_Bool)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)modelDescription;
@property(readonly, copy) NSData *data;
- (id)labels;
- (id)labelForString:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 language:(id)arg2 error:(id *)arg3;
- (id)initWithMLModel:(id)arg1 error:(id *)arg2;
- (id)initWithNLModel:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;

@end
