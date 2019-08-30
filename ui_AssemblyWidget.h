/********************************************************************************
** Form generated from reading UI file 'AssemblyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSEMBLYWIDGET_H
#define UI_ASSEMBLYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AssemblyWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *mainTab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *testZSpinBox;
    QSpinBox *testYSpinBox;
    QPushButton *testButton;
    QSpinBox *testXSpinBox;
    QCheckBox *hollowCheckBox;
    QSpinBox *shellThicknessSpinBox;
    QLabel *label_3;
    QPushButton *loadFileButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QCheckBox *renderBricksBox;
    QCheckBox *renderGraphBox;
    QRadioButton *biconRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *layerBox;
    QSpinBox *layerSpinBox;
    QRadioButton *randomRadioButton;
    QRadioButton *conRadioButton;
    QRadioButton *realColorRadioButton;
    QTabWidget *basicAdvancedTabs;
    QWidget *basicTab;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QPushButton *autoOptimizeButton;
    QPushButton *finalizeButton;
    QSpacerItem *verticalSpacer_3;
    QWidget *advancedTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *splitConCompButton;
    QPushButton *loopConCompButton;
    QPushButton *mergeButton;
    QPushButton *splitBiconCompButton;
    QPushButton *loopBiconCompButton;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QPushButton *solveBrickLimitButton;
    QPushButton *postHollowButton;
    QGridLayout *gridLayout_6;
    QPushButton *objExportButton;
    QPushButton *saveInstructionsButton;
    QPushButton *printStatsButton;
    QWidget *limitTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox1x2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *spinBox1x3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *spinBox1x4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *spinBox1x6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QSpinBox *spinBox1x8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QSpinBox *spinBox2x2;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_31;
    QSpinBox *spinBox2x3;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_30;
    QSpinBox *spinBox2x4;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_29;
    QSpinBox *spinBox2x6;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_28;
    QSpinBox *spinBox2x8;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *AssemblyWidget)
    {
        if (AssemblyWidget->objectName().isEmpty())
            AssemblyWidget->setObjectName(QStringLiteral("AssemblyWidget"));
        AssemblyWidget->resize(352, 625);
        verticalLayout_5 = new QVBoxLayout(AssemblyWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(AssemblyWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        mainTab = new QWidget();
        mainTab->setObjectName(QStringLiteral("mainTab"));
        verticalLayout = new QVBoxLayout(mainTab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        groupBox = new QGroupBox(mainTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(12, -1, -1, -1);
        testZSpinBox = new QSpinBox(groupBox);
        testZSpinBox->setObjectName(QStringLiteral("testZSpinBox"));
        testZSpinBox->setMinimum(1);
        testZSpinBox->setMaximum(999);
        testZSpinBox->setValue(5);

        gridLayout->addWidget(testZSpinBox, 3, 3, 1, 1);

        testYSpinBox = new QSpinBox(groupBox);
        testYSpinBox->setObjectName(QStringLiteral("testYSpinBox"));
        testYSpinBox->setMinimum(1);
        testYSpinBox->setMaximum(999);
        testYSpinBox->setValue(5);

        gridLayout->addWidget(testYSpinBox, 3, 2, 1, 1);

        testButton = new QPushButton(groupBox);
        testButton->setObjectName(QStringLiteral("testButton"));
        testButton->setMinimumSize(QSize(0, 23));

        gridLayout->addWidget(testButton, 3, 0, 1, 1);

        testXSpinBox = new QSpinBox(groupBox);
        testXSpinBox->setObjectName(QStringLiteral("testXSpinBox"));
        QFont font;
        font.setKerning(true);
        testXSpinBox->setFont(font);
        testXSpinBox->setLayoutDirection(Qt::LeftToRight);
        testXSpinBox->setAutoFillBackground(false);
        testXSpinBox->setFrame(true);
        testXSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        testXSpinBox->setMinimum(1);
        testXSpinBox->setMaximum(999);
        testXSpinBox->setValue(5);

        gridLayout->addWidget(testXSpinBox, 3, 1, 1, 1);

        hollowCheckBox = new QCheckBox(groupBox);
        hollowCheckBox->setObjectName(QStringLiteral("hollowCheckBox"));
        hollowCheckBox->setChecked(true);

        gridLayout->addWidget(hollowCheckBox, 0, 0, 1, 1);

        shellThicknessSpinBox = new QSpinBox(groupBox);
        shellThicknessSpinBox->setObjectName(QStringLiteral("shellThicknessSpinBox"));
        shellThicknessSpinBox->setValue(2);

        gridLayout->addWidget(shellThicknessSpinBox, 0, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 2);

        loadFileButton = new QPushButton(groupBox);
        loadFileButton->setObjectName(QStringLiteral("loadFileButton"));
        loadFileButton->setMinimumSize(QSize(0, 23));

        gridLayout->addWidget(loadFileButton, 1, 0, 1, 4);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(mainTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        renderBricksBox = new QCheckBox(groupBox_2);
        renderBricksBox->setObjectName(QStringLiteral("renderBricksBox"));
        renderBricksBox->setChecked(true);

        gridLayout_2->addWidget(renderBricksBox, 1, 0, 1, 1);

        renderGraphBox = new QCheckBox(groupBox_2);
        renderGraphBox->setObjectName(QStringLiteral("renderGraphBox"));

        gridLayout_2->addWidget(renderGraphBox, 1, 1, 1, 1);

        biconRadioButton = new QRadioButton(groupBox_2);
        biconRadioButton->setObjectName(QStringLiteral("biconRadioButton"));

        gridLayout_2->addWidget(biconRadioButton, 3, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        layerBox = new QCheckBox(groupBox_2);
        layerBox->setObjectName(QStringLiteral("layerBox"));

        horizontalLayout_3->addWidget(layerBox);

        layerSpinBox = new QSpinBox(groupBox_2);
        layerSpinBox->setObjectName(QStringLiteral("layerSpinBox"));
        layerSpinBox->setWrapping(false);
        layerSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        layerSpinBox->setMaximum(999);

        horizontalLayout_3->addWidget(layerSpinBox);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        randomRadioButton = new QRadioButton(groupBox_2);
        randomRadioButton->setObjectName(QStringLiteral("randomRadioButton"));
        randomRadioButton->setChecked(false);

        gridLayout_2->addWidget(randomRadioButton, 3, 0, 1, 1);

        conRadioButton = new QRadioButton(groupBox_2);
        conRadioButton->setObjectName(QStringLiteral("conRadioButton"));

        gridLayout_2->addWidget(conRadioButton, 2, 1, 1, 1);

        realColorRadioButton = new QRadioButton(groupBox_2);
        realColorRadioButton->setObjectName(QStringLiteral("realColorRadioButton"));
        realColorRadioButton->setChecked(true);

        gridLayout_2->addWidget(realColorRadioButton, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        basicAdvancedTabs = new QTabWidget(mainTab);
        basicAdvancedTabs->setObjectName(QStringLiteral("basicAdvancedTabs"));
        basicTab = new QWidget();
        basicTab->setObjectName(QStringLiteral("basicTab"));
        verticalLayout_4 = new QVBoxLayout(basicTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 5, 20, 5);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        autoOptimizeButton = new QPushButton(basicTab);
        autoOptimizeButton->setObjectName(QStringLiteral("autoOptimizeButton"));
        autoOptimizeButton->setMinimumSize(QSize(0, 23));

        verticalLayout_4->addWidget(autoOptimizeButton);

        finalizeButton = new QPushButton(basicTab);
        finalizeButton->setObjectName(QStringLiteral("finalizeButton"));
        finalizeButton->setMinimumSize(QSize(0, 23));

        verticalLayout_4->addWidget(finalizeButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        basicAdvancedTabs->addTab(basicTab, QString());
        advancedTab = new QWidget();
        advancedTab->setObjectName(QStringLiteral("advancedTab"));
        verticalLayout_3 = new QVBoxLayout(advancedTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(1, 1, 1, 1);
        groupBox_3 = new QGroupBox(advancedTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        splitConCompButton = new QPushButton(groupBox_3);
        splitConCompButton->setObjectName(QStringLiteral("splitConCompButton"));
        splitConCompButton->setMinimumSize(QSize(0, 23));

        gridLayout_3->addWidget(splitConCompButton, 2, 1, 1, 1);

        loopConCompButton = new QPushButton(groupBox_3);
        loopConCompButton->setObjectName(QStringLiteral("loopConCompButton"));
        loopConCompButton->setMinimumSize(QSize(0, 23));

        gridLayout_3->addWidget(loopConCompButton, 2, 2, 1, 1);

        mergeButton = new QPushButton(groupBox_3);
        mergeButton->setObjectName(QStringLiteral("mergeButton"));
        mergeButton->setMinimumSize(QSize(0, 23));

        gridLayout_3->addWidget(mergeButton, 1, 0, 1, 3);

        splitBiconCompButton = new QPushButton(groupBox_3);
        splitBiconCompButton->setObjectName(QStringLiteral("splitBiconCompButton"));
        splitBiconCompButton->setMinimumSize(QSize(0, 23));

        gridLayout_3->addWidget(splitBiconCompButton, 3, 1, 1, 1);

        loopBiconCompButton = new QPushButton(groupBox_3);
        loopBiconCompButton->setObjectName(QStringLiteral("loopBiconCompButton"));
        loopBiconCompButton->setMinimumSize(QSize(0, 23));

        gridLayout_3->addWidget(loopBiconCompButton, 3, 2, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(advancedTab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        solveBrickLimitButton = new QPushButton(groupBox_4);
        solveBrickLimitButton->setObjectName(QStringLiteral("solveBrickLimitButton"));
        solveBrickLimitButton->setMinimumSize(QSize(0, 23));

        gridLayout_5->addWidget(solveBrickLimitButton, 1, 0, 1, 1);

        postHollowButton = new QPushButton(groupBox_4);
        postHollowButton->setObjectName(QStringLiteral("postHollowButton"));
        postHollowButton->setMinimumSize(QSize(0, 23));
        postHollowButton->setFlat(false);

        gridLayout_5->addWidget(postHollowButton, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_4);

        basicAdvancedTabs->addTab(advancedTab, QString());

        verticalLayout->addWidget(basicAdvancedTabs);

        gridLayout_6 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout_6->setSpacing(-1);
#endif
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        objExportButton = new QPushButton(mainTab);
        objExportButton->setObjectName(QStringLiteral("objExportButton"));
        objExportButton->setMinimumSize(QSize(0, 23));

        gridLayout_6->addWidget(objExportButton, 1, 1, 1, 1);

        saveInstructionsButton = new QPushButton(mainTab);
        saveInstructionsButton->setObjectName(QStringLiteral("saveInstructionsButton"));
        saveInstructionsButton->setMinimumSize(QSize(0, 23));

        gridLayout_6->addWidget(saveInstructionsButton, 1, 0, 1, 1);

        printStatsButton = new QPushButton(mainTab);
        printStatsButton->setObjectName(QStringLiteral("printStatsButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(printStatsButton->sizePolicy().hasHeightForWidth());
        printStatsButton->setSizePolicy(sizePolicy);
        printStatsButton->setMinimumSize(QSize(0, 23));
        printStatsButton->setFlat(false);

        gridLayout_6->addWidget(printStatsButton, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_6);

        tabWidget->addTab(mainTab, QString());
        limitTab = new QWidget();
        limitTab->setObjectName(QStringLiteral("limitTab"));
        verticalLayout_2 = new QVBoxLayout(limitTab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(limitTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        spinBox1x2 = new QSpinBox(limitTab);
        spinBox1x2->setObjectName(QStringLiteral("spinBox1x2"));
        spinBox1x2->setMinimum(-1);
        spinBox1x2->setMaximum(9999);
        spinBox1x2->setValue(-1);

        horizontalLayout_4->addWidget(spinBox1x2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(limitTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        spinBox1x3 = new QSpinBox(limitTab);
        spinBox1x3->setObjectName(QStringLiteral("spinBox1x3"));
        spinBox1x3->setMinimum(-1);
        spinBox1x3->setMaximum(9999);
        spinBox1x3->setValue(-1);

        horizontalLayout_5->addWidget(spinBox1x3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(limitTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        spinBox1x4 = new QSpinBox(limitTab);
        spinBox1x4->setObjectName(QStringLiteral("spinBox1x4"));
        spinBox1x4->setMinimum(-1);
        spinBox1x4->setMaximum(9999);
        spinBox1x4->setValue(-1);

        horizontalLayout_6->addWidget(spinBox1x4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(limitTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_7);

        spinBox1x6 = new QSpinBox(limitTab);
        spinBox1x6->setObjectName(QStringLiteral("spinBox1x6"));
        spinBox1x6->setMinimum(-1);
        spinBox1x6->setMaximum(9999);
        spinBox1x6->setValue(-1);

        horizontalLayout_7->addWidget(spinBox1x6);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_16 = new QLabel(limitTab);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_16);

        spinBox1x8 = new QSpinBox(limitTab);
        spinBox1x8->setObjectName(QStringLiteral("spinBox1x8"));
        spinBox1x8->setMinimum(-1);
        spinBox1x8->setMaximum(9999);
        spinBox1x8->setValue(-1);

        horizontalLayout_16->addWidget(spinBox1x8);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_15 = new QLabel(limitTab);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_15);

        spinBox2x2 = new QSpinBox(limitTab);
        spinBox2x2->setObjectName(QStringLiteral("spinBox2x2"));
        spinBox2x2->setMinimum(-1);
        spinBox2x2->setMaximum(9999);
        spinBox2x2->setValue(-1);

        horizontalLayout_15->addWidget(spinBox2x2);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_31 = new QLabel(limitTab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setAlignment(Qt::AlignCenter);

        horizontalLayout_31->addWidget(label_31);

        spinBox2x3 = new QSpinBox(limitTab);
        spinBox2x3->setObjectName(QStringLiteral("spinBox2x3"));
        spinBox2x3->setMinimum(-1);
        spinBox2x3->setMaximum(9999);
        spinBox2x3->setValue(-1);

        horizontalLayout_31->addWidget(spinBox2x3);


        verticalLayout_2->addLayout(horizontalLayout_31);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        label_30 = new QLabel(limitTab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setAlignment(Qt::AlignCenter);

        horizontalLayout_30->addWidget(label_30);

        spinBox2x4 = new QSpinBox(limitTab);
        spinBox2x4->setObjectName(QStringLiteral("spinBox2x4"));
        spinBox2x4->setMinimum(-1);
        spinBox2x4->setMaximum(9999);
        spinBox2x4->setValue(-1);

        horizontalLayout_30->addWidget(spinBox2x4);


        verticalLayout_2->addLayout(horizontalLayout_30);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_29 = new QLabel(limitTab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setAlignment(Qt::AlignCenter);

        horizontalLayout_29->addWidget(label_29);

        spinBox2x6 = new QSpinBox(limitTab);
        spinBox2x6->setObjectName(QStringLiteral("spinBox2x6"));
        spinBox2x6->setMinimum(-1);
        spinBox2x6->setMaximum(9999);
        spinBox2x6->setValue(-1);

        horizontalLayout_29->addWidget(spinBox2x6);


        verticalLayout_2->addLayout(horizontalLayout_29);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_28 = new QLabel(limitTab);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(label_28);

        spinBox2x8 = new QSpinBox(limitTab);
        spinBox2x8->setObjectName(QStringLiteral("spinBox2x8"));
        spinBox2x8->setMinimum(-1);
        spinBox2x8->setMaximum(9999);
        spinBox2x8->setValue(-1);

        horizontalLayout_28->addWidget(spinBox2x8);


        verticalLayout_2->addLayout(horizontalLayout_28);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(limitTab, QString());

        verticalLayout_5->addWidget(tabWidget);


        retranslateUi(AssemblyWidget);

        tabWidget->setCurrentIndex(0);
        basicAdvancedTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AssemblyWidget);
    } // setupUi

    void retranslateUi(QWidget *AssemblyWidget)
    {
        AssemblyWidget->setWindowTitle(QApplication::translate("AssemblyWidget", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AssemblyWidget", "Load", Q_NULLPTR));
        testButton->setText(QApplication::translate("AssemblyWidget", "Load cube", Q_NULLPTR));
        hollowCheckBox->setText(QApplication::translate("AssemblyWidget", "Pre hollow", Q_NULLPTR));
        label_3->setText(QApplication::translate("AssemblyWidget", "Shell thickness:", Q_NULLPTR));
        loadFileButton->setText(QApplication::translate("AssemblyWidget", "Load shape", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("AssemblyWidget", "Display", Q_NULLPTR));
        renderBricksBox->setText(QApplication::translate("AssemblyWidget", "Render bricks", Q_NULLPTR));
        renderGraphBox->setText(QApplication::translate("AssemblyWidget", "Render graph", Q_NULLPTR));
        biconRadioButton->setText(QApplication::translate("AssemblyWidget", "Weak artic. point", Q_NULLPTR));
        layerBox->setText(QApplication::translate("AssemblyWidget", "Layer by layer", Q_NULLPTR));
        randomRadioButton->setText(QApplication::translate("AssemblyWidget", "Random", Q_NULLPTR));
        conRadioButton->setText(QApplication::translate("AssemblyWidget", "Connected comp", Q_NULLPTR));
        realColorRadioButton->setText(QApplication::translate("AssemblyWidget", "Real Color", Q_NULLPTR));
        autoOptimizeButton->setText(QApplication::translate("AssemblyWidget", "Auto optimize", Q_NULLPTR));
        finalizeButton->setText(QApplication::translate("AssemblyWidget", "Finalize", Q_NULLPTR));
        basicAdvancedTabs->setTabText(basicAdvancedTabs->indexOf(basicTab), QApplication::translate("AssemblyWidget", "Basic", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("AssemblyWidget", "Optimize", Q_NULLPTR));
        splitConCompButton->setText(QApplication::translate("AssemblyWidget", "Split", Q_NULLPTR));
        loopConCompButton->setText(QApplication::translate("AssemblyWidget", "Loop", Q_NULLPTR));
        mergeButton->setText(QApplication::translate("AssemblyWidget", "Merge", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        mergeButton->setShortcut(QApplication::translate("AssemblyWidget", "M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        splitBiconCompButton->setText(QApplication::translate("AssemblyWidget", "Split", Q_NULLPTR));
        loopBiconCompButton->setText(QApplication::translate("AssemblyWidget", "Loop", Q_NULLPTR));
        label->setText(QApplication::translate("AssemblyWidget", "Con Comp:", Q_NULLPTR));
        label_2->setText(QApplication::translate("AssemblyWidget", "Bicon Comp:", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("AssemblyWidget", "Finalize", Q_NULLPTR));
        solveBrickLimitButton->setText(QApplication::translate("AssemblyWidget", "Solve number constaints", Q_NULLPTR));
        postHollowButton->setText(QApplication::translate("AssemblyWidget", "Post hollow", Q_NULLPTR));
        basicAdvancedTabs->setTabText(basicAdvancedTabs->indexOf(advancedTab), QApplication::translate("AssemblyWidget", "Advanced", Q_NULLPTR));
        objExportButton->setText(QApplication::translate("AssemblyWidget", "Export to .obj", Q_NULLPTR));
        saveInstructionsButton->setText(QApplication::translate("AssemblyWidget", "Save instructions", Q_NULLPTR));
        printStatsButton->setText(QApplication::translate("AssemblyWidget", "Print stats", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(mainTab), QApplication::translate("AssemblyWidget", "Main", Q_NULLPTR));
        label_4->setText(QApplication::translate("AssemblyWidget", "1x2", Q_NULLPTR));
        label_5->setText(QApplication::translate("AssemblyWidget", "1x3", Q_NULLPTR));
        label_6->setText(QApplication::translate("AssemblyWidget", "1x4", Q_NULLPTR));
        label_7->setText(QApplication::translate("AssemblyWidget", "1x6", Q_NULLPTR));
        label_16->setText(QApplication::translate("AssemblyWidget", "1x8", Q_NULLPTR));
        label_15->setText(QApplication::translate("AssemblyWidget", "2x2", Q_NULLPTR));
        label_31->setText(QApplication::translate("AssemblyWidget", "2x3", Q_NULLPTR));
        label_30->setText(QApplication::translate("AssemblyWidget", "2x4", Q_NULLPTR));
        label_29->setText(QApplication::translate("AssemblyWidget", "2x6", Q_NULLPTR));
        label_28->setText(QApplication::translate("AssemblyWidget", "2x8", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(limitTab), QApplication::translate("AssemblyWidget", "Limits", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AssemblyWidget: public Ui_AssemblyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSEMBLYWIDGET_H
