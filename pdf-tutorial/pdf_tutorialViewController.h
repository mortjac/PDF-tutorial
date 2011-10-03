//
//  pdf_tutorialViewController.h
//  pdf-tutorial
//
//  Created by Morten Jacobsen on 03.10.11.
//  Copyright 2011 no excuse accounting as. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>
#import <MessageUI/MessageUI.h>
#import <QuickLook/QuickLook.h>

@interface pdf_tutorialViewController : UIViewController <MFMailComposeViewControllerDelegate, UIActionSheetDelegate, QLPreviewControllerDataSource>{
    UITextView *textView;
    NSString* pdfFilePath;
}

@property (nonatomic, retain) NSString* pdfFilePath;
@property (nonatomic, retain) IBOutlet UITextView *textView;
@property (nonatomic, retain) IBOutlet UIButton *savePdf;

- (IBAction)savePDFFile:(id)sender;

@end